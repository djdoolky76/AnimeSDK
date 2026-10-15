#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJIAGLCAPE;
class MOOEMCFGGNM_PICKDNMPCLL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOOEMCFGGNM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA36780)
#define MOOEMCFGGNM_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xBA35B20)
#define MOOEMCFGGNM_LODCDEIDBMA_OFFSET UNITYSDK_OFFSET(0xBA35A90)

inline static constexpr unsigned int MOOEMCFGGNM_TypeDefinitionIndex = 56080;

	class MOOEMCFGGNM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* FHNILDEKKOP; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* AEGOBFGGCLF; // 0x18
		::System::Int32 HDPPACHDAOA; // 0x20
		::System::UInt32 ADMKIBOHAGG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_CTOR_OFFSET))(this);
		}

		::MOOEMCFGGNM_PICKDNMPCLL* LODCDEIDBMA()
		{
			return ((::MOOEMCFGGNM_PICKDNMPCLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_LODCDEIDBMA_OFFSET))(this);
		}

		::IDJIAGLCAPE* HMPDCLHIPHI()
		{
			return ((::IDJIAGLCAPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_HMPDCLHIPHI_OFFSET))(this);
		}

	};
