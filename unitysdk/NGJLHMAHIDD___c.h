#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGJLHMAHIDD;
namespace System { class Object; }

#define NGJLHMAHIDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE6A90)
#define NGJLHMAHIDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE6AD0)
#define NGJLHMAHIDD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAE6AE0)

inline static constexpr unsigned int NGJLHMAHIDD___c_TypeDefinitionIndex = 28567;

	class NGJLHMAHIDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGJLHMAHIDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD___C_CTOR_OFFSET))(this);
		}

		::NGJLHMAHIDD* __cctor_b__38_0()
		{
			return ((::NGJLHMAHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
