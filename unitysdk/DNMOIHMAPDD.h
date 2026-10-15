#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class OANPAFBBGDI;
namespace System { class String; }

#define DNMOIHMAPDD_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD5150)
#define DNMOIHMAPDD_OGFLMFEEKKL_OFFSET UNITYSDK_OFFSET(0x11FD51C0)
#define DNMOIHMAPDD_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x11FD52A0)
#define DNMOIHMAPDD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x11FD5330)

inline static constexpr unsigned int DNMOIHMAPDD_TypeDefinitionIndex = 71712;

	class DNMOIHMAPDD : public ::RPG::Client::UIController
	{
	public:
		::System::String* KGIFCAMLMJJ; // 0x190
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMOIHMAPDD_CTOR_OFFSET))(this);
		}

		::System::Void OGFLMFEEKKL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNMOIHMAPDD_OGFLMFEEKKL_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMOIHMAPDD__SETUPVIEW_OFFSET))(this);
		}

		::OANPAFBBGDI* OICGPNAMNAI()
		{
			return ((::OANPAFBBGDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMOIHMAPDD_OICGPNAMNAI_OFFSET))(this);
		}

	};
