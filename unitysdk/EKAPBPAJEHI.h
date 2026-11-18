#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MOAPPNJBMJF.h"

#define EKAPBPAJEHI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14171E60)
#define EKAPBPAJEHI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14171F00)
#define EKAPBPAJEHI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14171DD0)
#define EKAPBPAJEHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x14171D50)
#define EKAPBPAJEHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14171DC0)

inline static constexpr unsigned int EKAPBPAJEHI_TypeDefinitionIndex = 43195;

class EKAPBPAJEHI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x100; // 0x0
	::MOAPPNJBMJF INIGIODDOAB; // 0x20
	::MOAPPNJBMJF KGONNDCPJGB; // 0x24
	::System::UInt32 LOJDILDNHDN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKAPBPAJEHI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAPBPAJEHI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAPBPAJEHI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NGINNEPJHCJ, ::MOAPPNJBMJF NIPGKPPICDG, ::MOAPPNJBMJF ANOHIDIPEMN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MOAPPNJBMJF, ::MOAPPNJBMJF))((::PBYTE)hIl2Cpp + EKAPBPAJEHI_CNHBDOMKKDE_OFFSET))(this, NGINNEPJHCJ, NIPGKPPICDG, ANOHIDIPEMN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAPBPAJEHI_FIGPAOKNJLN_OFFSET))(this);
	}
};
