#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine::AI { class NavMeshPath; }

#define NLMEGJGJBNN_ACCKFFALFMG_OFFSET UNITYSDK_OFFSET(0xBC6BC40)
#define NLMEGJGJBNN_AOLIGGAEOIB_OFFSET UNITYSDK_OFFSET(0xBC6BA30)
#define NLMEGJGJBNN_BGGPFKCHALH_OFFSET UNITYSDK_OFFSET(0xBC6BE50)
#define NLMEGJGJBNN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6C060)
#define NLMEGJGJBNN_GDBLCDDLENP_OFFSET UNITYSDK_OFFSET(0xBC6BB20)
#define NLMEGJGJBNN_IGBHPLMADED_OFFSET UNITYSDK_OFFSET(0xBC6BF50)
#define NLMEGJGJBNN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBC6BFE0)
#define NLMEGJGJBNN_LOHIEAKFFEA_OFFSET UNITYSDK_OFFSET(0xBC6B890)
#define NLMEGJGJBNN_PAOHHKELDLG_OFFSET UNITYSDK_OFFSET(0xBC6B910)
#define NLMEGJGJBNN_PCPPAFLMPCM_OFFSET UNITYSDK_OFFSET(0xBC6BEE0)

inline static constexpr unsigned int NLMEGJGJBNN_TypeDefinitionIndex = 57120;

	class NLMEGJGJBNN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ILIGGDLECFK; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* BEKHLKNLNPJ; // 0x18
		::UnityEngine::AI::NavMeshPath* IPKCFNKIDMB; // 0x20
		::Il2CppArray<::System::UInt64>* MPBKCMFMKDO; // 0x28
		::Il2CppArray<::System::Byte>* KJMFAKGGKNB; // 0x30
		::System::Int32 JLFGEFDOHEJ; // 0x38
		::System::Int32 PKIBPKHADHA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_CTOR_OFFSET))(this);
		}

		::System::Boolean LOHIEAKFFEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_LOHIEAKFFEA_OFFSET))(this);
		}

		::UnityEngine::Vector3 PAOHHKELDLG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_PAOHHKELDLG_OFFSET))(this);
		}

		::UnityEngine::Vector3 AOLIGGAEOIB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_AOLIGGAEOIB_OFFSET))(this);
		}

		::UnityEngine::Vector3 GDBLCDDLENP(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_GDBLCDDLENP_OFFSET))(this, a1);
		}

		::System::Single ACCKFFALFMG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_ACCKFFALFMG_OFFSET))(this);
		}

		::System::Void BGGPFKCHALH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_BGGPFKCHALH_OFFSET))(this, a1);
		}

		::System::Boolean PCPPAFLMPCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_PCPPAFLMPCM_OFFSET))(this);
		}

		::System::Boolean IGBHPLMADED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_IGBHPLMADED_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMEGJGJBNN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
