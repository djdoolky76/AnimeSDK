#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJMIAMJLMPA;
namespace System { class Object; }

#define PJMIAMJLMPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F48FB50)
#define PJMIAMJLMPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48FB90)
#define PJMIAMJLMPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F48FBA0)

inline static constexpr unsigned int PJMIAMJLMPA___c_TypeDefinitionIndex = 27450;

	class PJMIAMJLMPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x405F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJMIAMJLMPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA___C_CTOR_OFFSET))(this);
		}

		::PJMIAMJLMPA* __cctor_b__23_0()
		{
			return ((::PJMIAMJLMPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIAMJLMPA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
