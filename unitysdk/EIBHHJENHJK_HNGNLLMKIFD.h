#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_HNGNLLMKIFD_HLFOONMEOIL_OFFSET UNITYSDK_OFFSET(0x158B0F00)
#define EIBHHJENHJK_HNGNLLMKIFD_LHMFIPICFAO_OFFSET UNITYSDK_OFFSET(0x158B0DB0)
#define EIBHHJENHJK_HNGNLLMKIFD_ODNKBLGOOEK_OFFSET UNITYSDK_OFFSET(0x158B1230)
#define EIBHHJENHJK_HNGNLLMKIFD__CTOR_OFFSET UNITYSDK_OFFSET(0x158B0DA0)

inline static constexpr unsigned int EIBHHJENHJK_HNGNLLMKIFD_TypeDefinitionIndex = 71890;

class EIBHHJENHJK_HNGNLLMKIFD : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HNGNLLMKIFD__CTOR_OFFSET))(this);
	}

	::System::Void LHMFIPICFAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HNGNLLMKIFD_LHMFIPICFAO_OFFSET))(this);
	}

	::System::Void HLFOONMEOIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HNGNLLMKIFD_HLFOONMEOIL_OFFSET))(this);
	}

	::System::Void ODNKBLGOOEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HNGNLLMKIFD_ODNKBLGOOEK_OFFSET))(this);
	}
};
