#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONGCMCCAPOA;
namespace System { class Object; }

#define ONGCMCCAPOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE97970)
#define ONGCMCCAPOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE979B0)
#define ONGCMCCAPOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE979C0)

inline static constexpr unsigned int ONGCMCCAPOA___c_TypeDefinitionIndex = 34518;

	class ONGCMCCAPOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONGCMCCAPOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA___C_CTOR_OFFSET))(this);
		}

		::ONGCMCCAPOA* __cctor_b__28_0()
		{
			return ((::ONGCMCCAPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
