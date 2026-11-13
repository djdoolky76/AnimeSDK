#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletView.h"
class ONMFFIDIOLN;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class BookletPageView; }
namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C57BF00)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C140)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C57B380)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET UNITYSDK_OFFSET(0x1C57B790)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C57AE20)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C57AE40)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1C57AE60)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_LEFTFLIP_OFFSET UNITYSDK_OFFSET(0x1C57B860)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_RIGHTFLIP_OFFSET UNITYSDK_OFFSET(0x1C57BD60)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C57AE30)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C57AE50)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C57B620)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYPAGES_OFFSET UNITYSDK_OFFSET(0x1C57B400)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C57B240)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITPAGES_OFFSET UNITYSDK_OFFSET(0x1C57AFB0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONNEXTFLIPPED_OFFSET UNITYSDK_OFFSET(0x1C57C000)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONPREVIOUSFLIPPED_OFFSET UNITYSDK_OFFSET(0x1C57BF60)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletFlippableView_TypeDefinitionIndex = 74467;

	class BookletFlippableView : public ::RPG::Client::BookletView
	{
	public:
		::RPG::Client::BookletPageView* AbovePage; // 0x48
		::RPG::Client::UIAutoFlipMonoPlugin* AutoFlipPlugin; // 0x50
		::RPG::Client::UIPageTurnMonoPlugin* PageTurnPlugin; // 0x58
		::System::Collections::Generic::List_1<::ONMFFIDIOLN*>* _Pages; // 0x60
		::System::String* _LeftFlipAudioEventName_k__BackingField; // 0x68
		::System::String* _RightFlipAudioEventName_k__BackingField; // 0x70
		// static const ::System::Object AbovePageIndex; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_CTOR_OFFSET))(this);
		}

		::System::String* get_LeftFlipAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_LEFTFLIPAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Void set_LeftFlipAudioEventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_RightFlipAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Void set_RightFlipAudioEventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::UIController* a1, ::RPG::Client::Booklet* a2, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET))(this);
		}

		::ONMFFIDIOLN* GetPage(::System::Int32 a1)
		{
			return ((::ONMFFIDIOLN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET))(this, a1);
		}

		::System::Void LeftFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_LEFTFLIP_OFFSET))(this);
		}

		::System::Void RightFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_RIGHTFLIP_OFFSET))(this);
		}

		::System::Void AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_ADJUSTUIADAPTATION_OFFSET))(this);
		}

		::System::Void _OnPreviousFlipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONPREVIOUSFLIPPED_OFFSET))(this);
		}

		::System::Void _OnNextFlipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONNEXTFLIPPED_OFFSET))(this);
		}

		::System::Void _InitEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITEVENTLISTENER_OFFSET))(this);
		}

		::System::Void _DestroyEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYEVENTLISTENER_OFFSET))(this);
		}

		::System::Void _InitPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITPAGES_OFFSET))(this);
		}

		::System::Void _DestroyPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYPAGES_OFFSET))(this);
		}

	};
}
