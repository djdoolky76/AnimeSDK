#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNGJOABNBIM;
namespace System { class Object; }

#define JNGJOABNBIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7970F0)
#define JNGJOABNBIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E797120)
#define JNGJOABNBIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E797130)

inline static constexpr unsigned int JNGJOABNBIM___c_TypeDefinitionIndex = 32451;

	class JNGJOABNBIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGJOABNBIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGJOABNBIM___C_CTOR_OFFSET))(this);
		}

		::JNGJOABNBIM* __cctor_b__28_0()
		{
			return ((::JNGJOABNBIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGJOABNBIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
