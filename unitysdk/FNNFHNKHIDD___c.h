#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNNFHNKHIDD;
namespace System { class Object; }

#define FNNFHNKHIDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202DD7E0)
#define FNNFHNKHIDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202DD820)
#define FNNFHNKHIDD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202DD830)

inline static constexpr unsigned int FNNFHNKHIDD___c_TypeDefinitionIndex = 30284;

	class FNNFHNKHIDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNFHNKHIDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNFHNKHIDD___C_CTOR_OFFSET))(this);
		}

		::FNNFHNKHIDD* __cctor_b__23_0()
		{
			return ((::FNNFHNKHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNFHNKHIDD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
