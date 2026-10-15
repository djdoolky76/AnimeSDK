#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJPDJPINDOA;
namespace System { class Object; }

#define JJPDJPINDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E739A80)
#define JJPDJPINDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E739AC0)
#define JJPDJPINDOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E739AD0)

inline static constexpr unsigned int JJPDJPINDOA___c_TypeDefinitionIndex = 32895;

	class JJPDJPINDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJPDJPINDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA___C_CTOR_OFFSET))(this);
		}

		::JJPDJPINDOA* __cctor_b__28_0()
		{
			return ((::JJPDJPINDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
