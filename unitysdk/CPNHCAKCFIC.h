#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CPNHCAKCFIC_CDOICNPMIDK_OFFSET UNITYSDK_OFFSET(0x1C54D260)
#define CPNHCAKCFIC_FHBNMMOFJFM_OFFSET UNITYSDK_OFFSET(0x1C54CE80)
#define CPNHCAKCFIC_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1C54CE10)
#define CPNHCAKCFIC_JBPDFOGDFFK_OFFSET UNITYSDK_OFFSET(0x1C54CEC0)
#define CPNHCAKCFIC_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x1C54CF00)
#define CPNHCAKCFIC_PMIBNMKEHOJ_OFFSET UNITYSDK_OFFSET(0x1C54CFB0)

inline static constexpr unsigned int CPNHCAKCFIC_TypeDefinitionIndex = 41643;

	class CPNHCAKCFIC : public ::System::Object
	{
	public:
		static ::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CPNHCAKCFIC_HIDEJDELEEB_OFFSET))();
		}

		static ::RPG::Client::MechCraft::MechCraftAttributeType FHBNMMOFJFM()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)())((::PBYTE)hIl2Cpp + CPNHCAKCFIC_FHBNMMOFJFM_OFFSET))();
		}

		static ::RPG::Client::MechCraft::MechCraftAttributeType JBPDFOGDFFK()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)())((::PBYTE)hIl2Cpp + CPNHCAKCFIC_JBPDFOGDFFK_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* OBHHNAKALGL(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CPNHCAKCFIC_OBHHNAKALGL_OFFSET))(a1);
		}

		static ::System::Int32 PMIBNMKEHOJ(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CPNHCAKCFIC_PMIBNMKEHOJ_OFFSET))(a1, a2);
		}

		static ::System::Void CDOICNPMIDK(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MechCraft::MechCraftAttributeType, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CPNHCAKCFIC_CDOICNPMIDK_OFFSET))(a1, a2, a3);
		}

	};
