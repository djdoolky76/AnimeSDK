#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JOPCOBDEFGN;
namespace MoleMole { class MonoRawImageBasedCurve; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOONSCREENLOGGER_AJFODJMIFGI_OFFSET UNITYSDK_OFFSET(0x1469A6F0)
#define MOLEMOLE_MONOONSCREENLOGGER_BFIOLLIIAGI_OFFSET UNITYSDK_OFFSET(0x1469A890)
#define MOLEMOLE_MONOONSCREENLOGGER_CLEARCURVE_OFFSET UNITYSDK_OFFSET(0x1469A640)
#define MOLEMOLE_MONOONSCREENLOGGER_ISDRAWING_OFFSET UNITYSDK_OFFSET(0x1469A4E0)
#define MOLEMOLE_MONOONSCREENLOGGER_KAIFPMHGOPO_OFFSET UNITYSDK_OFFSET(0x1469A760)
#define MOLEMOLE_MONOONSCREENLOGGER_NMAKPJDFPCK_OFFSET UNITYSDK_OFFSET(0x1469AD60)
#define MOLEMOLE_MONOONSCREENLOGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1469A2F0)
#define MOLEMOLE_MONOONSCREENLOGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1469A100)
#define MOLEMOLE_MONOONSCREENLOGGER_PAAKCAMDBBB_OFFSET UNITYSDK_OFFSET(0x1469AAF0)
#define MOLEMOLE_MONOONSCREENLOGGER_START_OFFSET UNITYSDK_OFFSET(0x14699F10)
#define MOLEMOLE_MONOONSCREENLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1469A6A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOnScreenLogger_TypeDefinitionIndex = 82924;

	class MonoOnScreenLogger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* AMEBHADCBPD; // 0x18
		::MoleMole::MonoRawImageBasedCurve* FBOBPFCPAJK; // 0x20
		::MoleMole::MonoRawImageBasedCurve* CFPDOHIIDCM; // 0x28
		::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>* KHIMGMGIBLB; // 0x30
		::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>* FHAENFEHCDN; // 0x38
		::System::Boolean disableScreenLog; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean IsDrawing(::System::Int32 LGPOLPKMFOG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_ISDRAWING_OFFSET))(this, LGPOLPKMFOG);
		}

		::System::Void ClearCurve(::System::Int32 LGPOLPKMFOG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_CLEARCURVE_OFFSET))(this, LGPOLPKMFOG);
		}

		::System::Boolean AJFODJMIFGI(::System::Int32 LGPOLPKMFOG, ::MoleMole::MonoRawImageBasedCurve*& FAJHPKBELMF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoRawImageBasedCurve*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_AJFODJMIFGI_OFFSET))(this, LGPOLPKMFOG, FAJHPKBELMF);
		}

		::System::Void KAIFPMHGOPO(::System::Single PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_KAIFPMHGOPO_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void PAAKCAMDBBB(::System::Int32 LGPOLPKMFOG, ::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>* NMBMMDBCCNM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_PAAKCAMDBBB_OFFSET))(this, LGPOLPKMFOG, NMBMMDBCCNM);
		}

		::System::Void BFIOLLIIAGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_BFIOLLIIAGI_OFFSET))(this);
		}

		static ::System::Void NMAKPJDFPCK(::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>*& NMBMMDBCCNM, ::MoleMole::MonoRawImageBasedCurve* FAJHPKBELMF)
		{
			return ((::System::Void(*)(::System::Func_2<::JOPCOBDEFGN*, ::System::Boolean>*&, ::MoleMole::MonoRawImageBasedCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONSCREENLOGGER_NMAKPJDFPCK_OFFSET))(NMBMMDBCCNM, FAJHPKBELMF);
		}
	};
}
