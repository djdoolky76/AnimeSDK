#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/BABICHJDNNH_DODNLPDHOKN.h"
class EDGNLGIJLOJ;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define BABICHJDNNH_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x16CD9E90)
#define BABICHJDNNH_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0x16CD9FC0)
#define BABICHJDNNH_CTOR_OFFSET UNITYSDK_OFFSET(0x16CDA130)
#define BABICHJDNNH_DEJLKILBEBA_OFFSET UNITYSDK_OFFSET(0x16CDA050)
#define BABICHJDNNH_DHEJLCKFKDK_OFFSET UNITYSDK_OFFSET(0x16CDA0A0)
#define BABICHJDNNH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16CD9A20)
#define BABICHJDNNH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16CD8A90)
#define BABICHJDNNH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16CD8AB0)
#define BABICHJDNNH_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0x16CD9F30)
#define BABICHJDNNH_IGGPLGJBKKN_OFFSET UNITYSDK_OFFSET(0x16CD9E20)
#define BABICHJDNNH_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x16CD9C60)
#define BABICHJDNNH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16CD8AA0)
#define BABICHJDNNH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16CD8AF0)
#define BABICHJDNNH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16CD87D0)
#define BABICHJDNNH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16CD9BD0)
#define BABICHJDNNH___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET UNITYSDK_OFFSET(0x16CDA160)

inline static constexpr unsigned int BABICHJDNNH_TypeDefinitionIndex = 74402;

	class BABICHJDNNH : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTitanType, ::System::Collections::Generic::List_1<::System::UInt32>*>* BBGOINLDJPN; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* EBMKFBAAHHI; // 0x68
		::UnityEngine::Transform* EFCOIBEANAJ; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::RPG::Client::NodeListViewPanel_1<::EDGNLGIJLOJ*>* ACBHEJCJGDA; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* AEDAGAGGKFL; // 0x88
		::UnityEngine::UI::Button* NIDPJAFEHNM; // 0x90
		::UnityEngine::Transform* DEAFAEDMLDD; // 0x98
		::UnityEngine::Transform* JGJJEGGBKKB; // 0xA0
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object PEJOGHOICIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABICHJDNNH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + BABICHJDNNH_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void IDCAMKKDGIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABICHJDNNH_IDCAMKKDGIO_OFFSET))(this, a1);
		}

		::System::Void CBDJKPPNMDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BABICHJDNNH_CBDJKPPNMDC_OFFSET))(this, a1);
		}

		::System::Void DEJLKILBEBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BABICHJDNNH_DEJLKILBEBA_OFFSET))(this, a1);
		}

		::System::Void DHEJLCKFKDK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BABICHJDNNH_DHEJLCKFKDK_OFFSET))(this, a1);
		}

		::System::Void PACBDGILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_PACBDGILPHI_OFFSET))(this);
		}

		::System::Void IGGPLGJBKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH_IGGPLGJBKKN_OFFSET))(this);
		}

		static ::System::Int32 __InitVarOnce_g___CompareDisplayData_15_0(::BABICHJDNNH_DODNLPDHOKN a1, ::BABICHJDNNH_DODNLPDHOKN a2)
		{
			return ((::System::Int32(*)(::BABICHJDNNH_DODNLPDHOKN, ::BABICHJDNNH_DODNLPDHOKN))((::PBYTE)hIl2Cpp + BABICHJDNNH___INITVARONCE_G___COMPAREDISPLAYDATA_15_0_OFFSET))(a1, a2);
		}

	};
