#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCFKFBIABM;

#define HGKIKKOLLFA_CBEFJLDGFMG_BMFJPECGJDE_OFFSET UNITYSDK_OFFSET(0x15C9E580)
#define HGKIKKOLLFA_CBEFJLDGFMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9E450)
#define HGKIKKOLLFA_CBEFJLDGFMG_GET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x15C9E530)
#define HGKIKKOLLFA_CBEFJLDGFMG_HKDEHAIHGPJ_OFFSET UNITYSDK_OFFSET(0x15C9E460)
#define HGKIKKOLLFA_CBEFJLDGFMG_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x15C9E4F0)

inline static constexpr unsigned int HGKIKKOLLFA_CBEFJLDGFMG_TypeDefinitionIndex = 71507;

	class HGKIKKOLLFA_CBEFJLDGFMG : public ::System::Object
	{
	public:
		// static const ::System::Object LBELHCFKHCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CBEFJLDGFMG_CTOR_OFFSET))(this);
		}

		::System::Boolean HKDEHAIHGPJ(::POCFKFBIABM* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::POCFKFBIABM*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CBEFJLDGFMG_HKDEHAIHGPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ODDLBLFDJJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CBEFJLDGFMG_ODDLBLFDJJM_OFFSET))(this);
		}

		::System::Single get_TweenDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CBEFJLDGFMG_GET_TWEENDURATION_OFFSET))(this);
		}

		::System::Boolean BMFJPECGJDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CBEFJLDGFMG_BMFJPECGJDE_OFFSET))(this);
		}

	};
