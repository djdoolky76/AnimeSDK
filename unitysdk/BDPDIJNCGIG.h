#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class String; }

#define BDPDIJNCGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x16306D50)
#define BDPDIJNCGIG_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x16306E20)
#define BDPDIJNCGIG_LODMENCNEJM_OFFSET UNITYSDK_OFFSET(0x16306EA0)
#define BDPDIJNCGIG_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0x16306E60)
#define BDPDIJNCGIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16306EF0)

inline static constexpr unsigned int BDPDIJNCGIG_TypeDefinitionIndex = 59271;

	class BDPDIJNCGIG : public ::System::Object
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x10
		::System::Boolean IAEBDHNKLOD; // 0x18
		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + BDPDIJNCGIG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDIJNCGIG_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDIJNCGIG_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::Void LODMENCNEJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDIJNCGIG_LODMENCNEJM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDIJNCGIG_TOSTRING_OFFSET))(this);
		}

	};
