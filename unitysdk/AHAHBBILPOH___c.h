#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHAHBBILPOH;
namespace System { class Object; }

#define AHAHBBILPOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23E350)
#define AHAHBBILPOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E23E390)
#define AHAHBBILPOH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E23E3A0)

inline static constexpr unsigned int AHAHBBILPOH___c_TypeDefinitionIndex = 31192;

	class AHAHBBILPOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHAHBBILPOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH___C_CTOR_OFFSET))(this);
		}

		::AHAHBBILPOH* __cctor_b__18_0()
		{
			return ((::AHAHBBILPOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAHBBILPOH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
