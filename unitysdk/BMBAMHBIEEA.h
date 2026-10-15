#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class APINNJNJFAN;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BMBAMHBIEEA_BBFCKPCKBMN_OFFSET UNITYSDK_OFFSET(0xBA869B0)
#define BMBAMHBIEEA_CHCLHIDGDGF_OFFSET UNITYSDK_OFFSET(0xBA86620)
#define BMBAMHBIEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA859B0)
#define BMBAMHBIEEA_HFBBHLHBHGL_OFFSET UNITYSDK_OFFSET(0xBA86890)
#define BMBAMHBIEEA_KBLMIEKCPMG_OFFSET UNITYSDK_OFFSET(0xBA864F0)
#define BMBAMHBIEEA_KNIJMFCBMHA_OFFSET UNITYSDK_OFFSET(0xBA86CD0)
#define BMBAMHBIEEA_LNDNMAIFMMO_OFFSET UNITYSDK_OFFSET(0xBA86730)
#define BMBAMHBIEEA_NMODMNACGJF_OFFSET UNITYSDK_OFFSET(0xBA867A0)
#define BMBAMHBIEEA_OBJDEPLDFMG_OFFSET UNITYSDK_OFFSET(0xBA866C0)
#define BMBAMHBIEEA_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0xBA85F20)
#define BMBAMHBIEEA__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA86490)
#define BMBAMHBIEEA__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA85AE0)
#define BMBAMHBIEEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBA86010)
#define BMBAMHBIEEA__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBA85FD0)
#define BMBAMHBIEEA___SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xBA86D20)
#define BMBAMHBIEEA___SETUPVIEW_B__3_1_OFFSET UNITYSDK_OFFSET(0xBA86EF0)

	class BMBAMHBIEEA : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HMLIPMFHDGK; // 0x190
		::System::Action* MCLELAFIEBJ; // 0x198
		::System::Boolean DFIAMJNMEAP; // 0x1A0
		::System::Boolean KLCFJOLMICI; // 0x1A1
		::System::Boolean MNJOPAEEGLD; // 0x1A2
		::System::Byte _padding0[0x5];
		::System::Int64 LDPEGLBLALO; // 0x1A8
		::System::Int64 ILBLJFLGAJD; // 0x1B0
		// static const ::System::Object APHOECLDJKJ; // 0x0
		::System::Void _ctor(::System::Action* a1, ::System::Boolean a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void KBLMIEKCPMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_KBLMIEKCPMG_OFFSET))(this, a1);
		}

		::System::Void OBJDEPLDFMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_OBJDEPLDFMG_OFFSET))(this, a1);
		}

		::System::Void LNDNMAIFMMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_LNDNMAIFMMO_OFFSET))(this, a1);
		}

		::System::Void NMODMNACGJF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_NMODMNACGJF_OFFSET))(this, a1);
		}

		::System::Void HFBBHLHBHGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_HFBBHLHBHGL_OFFSET))(this, a1);
		}

		::System::Void BBFCKPCKBMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_BBFCKPCKBMN_OFFSET))(this);
		}

		::System::Void CHCLHIDGDGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_CHCLHIDGDGF_OFFSET))(this);
		}

		::System::Void KNIJMFCBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_KNIJMFCBMHA_OFFSET))(this);
		}

		::APINNJNJFAN* OICGPNAMNAI()
		{
			return ((::APINNJNJFAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBAMHBIEEA_OICGPNAMNAI_OFFSET))(this);
		}

		::System::Void __SetupView_b__3_0(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BMBAMHBIEEA___SETUPVIEW_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Void __SetupView_b__3_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BMBAMHBIEEA___SETUPVIEW_B__3_1_OFFSET))(this, a1);
		}

	};
