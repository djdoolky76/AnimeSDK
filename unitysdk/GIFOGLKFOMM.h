#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JHIGAEIELKO;
class NGEHNDIFKLM;
class ODHMHHGKCJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIFOGLKFOMM_FECCACDLFDH_OFFSET UNITYSDK_OFFSET(0x15A29970)
#define GIFOGLKFOMM_GOOOCKPGPCA_OFFSET UNITYSDK_OFFSET(0x15A2A280)
#define GIFOGLKFOMM_MCPGIEGGDBH_OFFSET UNITYSDK_OFFSET(0x15A2A430)
#define GIFOGLKFOMM_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x15A29660)

inline static constexpr unsigned int GIFOGLKFOMM_TypeDefinitionIndex = 54008;

	class GIFOGLKFOMM : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint MDGNJPIMCPH(::JHIGAEIELKO* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::JHIGAEIELKO*, ::System::Int32))((::PBYTE)hIl2Cpp + GIFOGLKFOMM_MDGNJPIMCPH_OFFSET))(a1, a2);
		}

		static ::ODHMHHGKCJP* GOOOCKPGPCA(::JHIGAEIELKO* a1, ::System::Int32 a2)
		{
			return ((::ODHMHHGKCJP*(*)(::JHIGAEIELKO*, ::System::Int32))((::PBYTE)hIl2Cpp + GIFOGLKFOMM_GOOOCKPGPCA_OFFSET))(a1, a2);
		}

		static ::ODHMHHGKCJP* FECCACDLFDH(::JHIGAEIELKO* a1, ::System::Int32 a2)
		{
			return ((::ODHMHHGKCJP*(*)(::JHIGAEIELKO*, ::System::Int32))((::PBYTE)hIl2Cpp + GIFOGLKFOMM_FECCACDLFDH_OFFSET))(a1, a2);
		}

		static ::System::Void MCPGIEGGDBH(::JHIGAEIELKO* a1, ::ODHMHHGKCJP* a2, ::System::Collections::Generic::List_1<::NGEHNDIFKLM*>* a3)
		{
			return ((::System::Void(*)(::JHIGAEIELKO*, ::ODHMHHGKCJP*, ::System::Collections::Generic::List_1<::NGEHNDIFKLM*>*))((::PBYTE)hIl2Cpp + GIFOGLKFOMM_MCPGIEGGDBH_OFFSET))(a1, a2, a3);
		}

	};
