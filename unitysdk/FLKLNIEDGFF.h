#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"
class FLKLNIEDGFF;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define FLKLNIEDGFF_COJIBNGHCJG_OFFSET UNITYSDK_OFFSET(0x1C476F80)
#define FLKLNIEDGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C42A370)
#define FLKLNIEDGFF_EKHNOMJLDCH_OFFSET UNITYSDK_OFFSET(0x1C477050)
#define FLKLNIEDGFF_FMPLLMINOPE_OFFSET UNITYSDK_OFFSET(0x1C477010)
#define FLKLNIEDGFF_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C476F60)
#define FLKLNIEDGFF_IFPDJCIDGKK_OFFSET UNITYSDK_OFFSET(0x1C477090)
#define FLKLNIEDGFF_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1C476E60)
#define FLKLNIEDGFF_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x1C476E00)
#define FLKLNIEDGFF_JKMPIAPPJPD_OFFSET UNITYSDK_OFFSET(0x1C476F50)
#define FLKLNIEDGFF_MOJGKEDMPFH_OFFSET UNITYSDK_OFFSET(0x1C476E50)
#define FLKLNIEDGFF_NFKDOLNAAAE_OFFSET UNITYSDK_OFFSET(0x1C476D40)
#define FLKLNIEDGFF_OPDHPJPHDDP_1_OFFSET UNITYSDK_OFFSET(0x1C4774C0)
#define FLKLNIEDGFF_OPDHPJPHDDP_OFFSET UNITYSDK_OFFSET(0x1C477390)
#define FLKLNIEDGFF_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C476F70)

inline static constexpr unsigned int FLKLNIEDGFF_TypeDefinitionIndex = 41549;

	class FLKLNIEDGFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MEOBKJMFNCD; // 0x10
		::System::IO::MemoryStream* IPMHANHEPME; // 0x18
		::System::UInt32 _Offset_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NFKDOLNAAAE()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_NFKDOLNAAAE_OFFSET))(this);
		}

		::System::UInt32 IMIKJMCGGML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_IMIKJMCGGML_OFFSET))(this);
		}

		::System::UInt32 MOJGKEDMPFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_MOJGKEDMPFH_OFFSET))(this);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_IKOCHGBIGPJ_OFFSET))(this);
		}

		::RPG::Client::SectionType JKMPIAPPJPD()
		{
			return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_JKMPIAPPJPD_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_SET_OFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>* COJIBNGHCJG()
		{
			return ((::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_COJIBNGHCJG_OFFSET))(this);
		}

		::System::Void FMPLLMINOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_FMPLLMINOPE_OFFSET))(this);
		}

		::System::Void EKHNOMJLDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_EKHNOMJLDCH_OFFSET))(this);
		}

		::System::Void IFPDJCIDGKK(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_IFPDJCIDGKK_OFFSET))(this, a1);
		}

		::System::Void OPDHPJPHDDP(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_OPDHPJPHDDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPDHPJPHDDP_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLKLNIEDGFF_OPDHPJPHDDP_1_OFFSET))(this, a1);
		}

	};
