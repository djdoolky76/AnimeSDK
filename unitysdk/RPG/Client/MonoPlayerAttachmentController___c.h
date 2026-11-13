#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIGMEGEAEI;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26E200)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D26E240)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D26E250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentController___c_TypeDefinitionIndex = 61427;

	class MonoPlayerAttachmentController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70B00);
		}

		static ::System::Comparison_1<::CMIGMEGEAEI*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::CMIGMEGEAEI*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__3_0(::CMIGMEGEAEI* a1, ::CMIGMEGEAEI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CMIGMEGEAEI*, ::CMIGMEGEAEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
