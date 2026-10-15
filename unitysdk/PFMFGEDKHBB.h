#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPBKMBIGNC;
class BFGMJKEJPNA;
class JLJMMKPGDGH;
class KHKFODPFGEA;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFMFGEDKHBB_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0xC210410)
#define PFMFGEDKHBB_AHBODANBDFK_OFFSET UNITYSDK_OFFSET(0xC210870)
#define PFMFGEDKHBB_ANELIPPLCFA_OFFSET UNITYSDK_OFFSET(0xC2104E0)
#define PFMFGEDKHBB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2104D0)
#define PFMFGEDKHBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC210750)
#define PFMFGEDKHBB_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0xC210470)

inline static constexpr unsigned int PFMFGEDKHBB_TypeDefinitionIndex = 81950;

	class PFMFGEDKHBB : public ::System::Object
	{
	public:
		::System::Action_1<::BFGMJKEJPNA*>* AgendaCompleted; // 0x10
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x18
		::AJPBKMBIGNC* CEAAMGFCOLP; // 0x20
		::System::Void _ctor(::JLJMMKPGDGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJMMKPGDGH*))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void ANELIPPLCFA(::AJPBKMBIGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_ANELIPPLCFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_DISPOSE_OFFSET))(this);
		}

		::System::Void AHBODANBDFK(::KHKFODPFGEA* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PFMFGEDKHBB_AHBODANBDFK_OFFSET))(this, a1, a2);
		}

	};
