#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPBGLLGGGDN;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define FBKGNHKJOPJ_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x1BA51BD0)
#define FBKGNHKJOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA52E60)
#define FBKGNHKJOPJ_DGKJLBOBGIP_OFFSET UNITYSDK_OFFSET(0x1BA51C20)
#define FBKGNHKJOPJ_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x1BA51B80)
#define FBKGNHKJOPJ_GET_USING_OFFSET UNITYSDK_OFFSET(0x1BA52D30)
#define FBKGNHKJOPJ_JOOLBGDFJMO_OFFSET UNITYSDK_OFFSET(0x1BA526F0)
#define FBKGNHKJOPJ_LANKJCGAEML_OFFSET UNITYSDK_OFFSET(0x1BA521B0)
#define FBKGNHKJOPJ_NAIAKIFEMDE_OFFSET UNITYSDK_OFFSET(0x1BA52250)
#define FBKGNHKJOPJ_OAHLJLDFEIK_OFFSET UNITYSDK_OFFSET(0x1BA52D70)
#define FBKGNHKJOPJ_SET_USING_OFFSET UNITYSDK_OFFSET(0x1BA52D40)

inline static constexpr unsigned int FBKGNHKJOPJ_TypeDefinitionIndex = 75156;

	class FBKGNHKJOPJ : public ::System::Object
	{
	public:
		::LPBGLLGGGDN* MHAEBFAEFCG; // 0x10
		::RPG::Client::UIController* INGLBIDJIMA; // 0x18
		::System::Boolean _Using_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_CTOR_OFFSET))(this);
		}

		::System::Void FHLALJENMHB(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_FHLALJENMHB_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BJPFKNECHPL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void LANKJCGAEML(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_LANKJCGAEML_OFFSET))(this, a1);
		}

		::System::Boolean NAIAKIFEMDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_NAIAKIFEMDE_OFFSET))(this);
		}

		::System::String* JOOLBGDFJMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_JOOLBGDFJMO_OFFSET))(this);
		}

		::System::Boolean get_Using()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_GET_USING_OFFSET))(this);
		}

		::System::Void set_Using(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_SET_USING_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DGKJLBOBGIP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_DGKJLBOBGIP_OFFSET))(this);
		}

		::RPG::Client::UIController* OAHLJLDFEIK()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ_OAHLJLDFEIK_OFFSET))(this);
		}

	};
