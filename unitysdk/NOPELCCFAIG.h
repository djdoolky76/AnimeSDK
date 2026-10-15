#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NetworkErrorDialog.h"
class PLIJICJHHDA;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define NOPELCCFAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF1110)
#define NOPELCCFAIG_ENGMDMGKMGI_OFFSET UNITYSDK_OFFSET(0xBCF1170)
#define NOPELCCFAIG_HFCAECODGHK_OFFSET UNITYSDK_OFFSET(0xBCF1FB0)
#define NOPELCCFAIG_IGBDLKDFLAB_OFFSET UNITYSDK_OFFSET(0xBCF1120)
#define NOPELCCFAIG_IKLFCOHJPIC_OFFSET UNITYSDK_OFFSET(0xBCF2480)
#define NOPELCCFAIG_KJABBNPOHCF_OFFSET UNITYSDK_OFFSET(0xBCF1F00)
#define NOPELCCFAIG_NJAGODONNKI_OFFSET UNITYSDK_OFFSET(0xBCF0EE0)
#define NOPELCCFAIG_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xBCF2090)
#define NOPELCCFAIG_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0xBCF2270)
#define NOPELCCFAIG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBCF13F0)
#define NOPELCCFAIG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBCF1560)

inline static constexpr unsigned int NOPELCCFAIG_TypeDefinitionIndex = 72720;

	class NOPELCCFAIG : public ::RPG::Client::NetworkErrorDialog
	{
	public:
		::PLIJICJHHDA* LFOODCDGFKH; // 0x1B0
		::System::Boolean HICOLDDDJNM; // 0x1B8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG_CTOR_OFFSET))(this);
		}

		static ::System::Void NJAGODONNKI(::System::String* a1, ::PLIJICJHHDA* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::System::String*, ::PLIJICJHHDA*, ::System::Action*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_NJAGODONNKI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ENGMDMGKMGI(::System::String* a1, ::System::String* a2, ::PLIJICJHHDA* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::PLIJICJHHDA*, ::System::Action*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_ENGMDMGKMGI_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void IGBDLKDFLAB(::PLIJICJHHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLIJICJHHDA*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_IGBDLKDFLAB_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnDetailClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_ONBTNDETAILCLICK_OFFSET))(this, a1);
		}

		static ::System::String* KJABBNPOHCF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NOPELCCFAIG_KJABBNPOHCF_OFFSET))();
		}

		::System::Boolean HFCAECODGHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG_HFCAECODGHK_OFFSET))(this);
		}

		::System::Void IKLFCOHJPIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPELCCFAIG_IKLFCOHJPIC_OFFSET))(this, a1);
		}

	};
