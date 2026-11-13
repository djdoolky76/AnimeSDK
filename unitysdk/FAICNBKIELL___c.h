#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICNBKIELL;
namespace System { class Object; }

#define FAICNBKIELL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74A4E0)
#define FAICNBKIELL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74A510)
#define FAICNBKIELL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F74A520)

inline static constexpr unsigned int FAICNBKIELL___c_TypeDefinitionIndex = 34602;

	class FAICNBKIELL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICNBKIELL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICNBKIELL___C_CTOR_OFFSET))(this);
		}

		::FAICNBKIELL* __cctor_b__48_0()
		{
			return ((::FAICNBKIELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICNBKIELL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
