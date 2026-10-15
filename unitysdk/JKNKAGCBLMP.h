#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFKDIBNNCDA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NBHCDAEKHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKNKAGCBLMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB229850)
#define JKNKAGCBLMP_ELGEINNEFDP_OFFSET UNITYSDK_OFFSET(0xB229750)
#define JKNKAGCBLMP_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xB2294C0)
#define JKNKAGCBLMP_PLBPDOJAGKM_OFFSET UNITYSDK_OFFSET(0xB229680)

inline static constexpr unsigned int JKNKAGCBLMP_TypeDefinitionIndex = 72055;

	class JKNKAGCBLMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FFKDIBNNCDA>* BMMBDPIHHON; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNKAGCBLMP_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*))((::PBYTE)hIl2Cpp + JKNKAGCBLMP_LNGKNPJIOML_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PLBPDOJAGKM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNKAGCBLMP_PLBPDOJAGKM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ELGEINNEFDP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNKAGCBLMP_ELGEINNEFDP_OFFSET))(this);
		}

	};
