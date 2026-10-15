#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FPPPPDMFMCC;
namespace RPG::Client::MechCraft::View { class MechCraftNpcCommentControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD641CA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD641700)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6417A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD641740)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftNpcCommentControl_TypeDefinitionIndex = 80037;

	class MechCraftNpcCommentControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FPPPPDMFMCC* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftNpcCommentControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_CTOR_OFFSET))(this);
		}

		::FPPPPDMFMCC* get_Content()
		{
			return ((::FPPPPDMFMCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::FPPPPDMFMCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPPPDMFMCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FPPPPDMFMCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPPPDMFMCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
