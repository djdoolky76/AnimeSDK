#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMOIPALHBJN;
namespace System { class Object; }

#define BMOIPALHBJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2EFB00)
#define BMOIPALHBJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EFB40)
#define BMOIPALHBJN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F2EFB50)

inline static constexpr unsigned int BMOIPALHBJN___c_TypeDefinitionIndex = 32537;

	class BMOIPALHBJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOIPALHBJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN___C_CTOR_OFFSET))(this);
		}

		::BMOIPALHBJN* __cctor_b__38_0()
		{
			return ((::BMOIPALHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
