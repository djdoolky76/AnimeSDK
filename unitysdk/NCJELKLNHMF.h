#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/NEMHKFFNDJO.h"
class PLAGENLANML;
namespace Google::Protobuf { class IMessage; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCJELKLNHMF_BABGGLPLPEO_OFFSET UNITYSDK_OFFSET(0x150FE0F0)
#define NCJELKLNHMF_CTOR_OFFSET UNITYSDK_OFFSET(0x150FDFD0)
#define NCJELKLNHMF_DBJOBNOHHKE_OFFSET UNITYSDK_OFFSET(0x150FE970)
#define NCJELKLNHMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150FDD30)
#define NCJELKLNHMF_HBLNPMPEPHB_OFFSET UNITYSDK_OFFSET(0x150FE560)
#define NCJELKLNHMF_HCGIPLMMEIN_OFFSET UNITYSDK_OFFSET(0x150FE4C0)
#define NCJELKLNHMF_IBLAPCFDHGA_OFFSET UNITYSDK_OFFSET(0x150FE7C0)
#define NCJELKLNHMF_IIBOOOLIEGD_OFFSET UNITYSDK_OFFSET(0x150FE710)
#define NCJELKLNHMF_LIJHIPGDJLH_OFFSET UNITYSDK_OFFSET(0x150FE2E0)
#define NCJELKLNHMF_NJDLDGCDDFK_OFFSET UNITYSDK_OFFSET(0x150FE1A0)
#define NCJELKLNHMF_PBNOJJOKNAI_OFFSET UNITYSDK_OFFSET(0x150FDD80)

inline static constexpr unsigned int NCJELKLNHMF_TypeDefinitionIndex = 78818;

	class NCJELKLNHMF : public ::HLFHMKMJNPK
	{
	public:
		::PLAGENLANML* FKINCGODJEP; // 0x18
		::System::UInt64 NPFHJGKJADO; // 0x20
		::System::Void _ctor(::PLAGENLANML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*))((::PBYTE)hIl2Cpp + NCJELKLNHMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJELKLNHMF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean BABGGLPLPEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJELKLNHMF_BABGGLPLPEO_OFFSET))(this);
		}

		::System::Void NJDLDGCDDFK(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NCJELKLNHMF_NJDLDGCDDFK_OFFSET))(this, a1);
		}

		::System::Void LIJHIPGDJLH(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NCJELKLNHMF_LIJHIPGDJLH_OFFSET))(this, a1);
		}

		::System::Boolean HCGIPLMMEIN(::System::UInt16 a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + NCJELKLNHMF_HCGIPLMMEIN_OFFSET))(this, a1, a2);
		}

		::System::Void HBLNPMPEPHB(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NCJELKLNHMF_HBLNPMPEPHB_OFFSET))(this, a1);
		}

		::System::Void IBLAPCFDHGA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NCJELKLNHMF_IBLAPCFDHGA_OFFSET))(this, a1);
		}

		::System::Void PBNOJJOKNAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJELKLNHMF_PBNOJJOKNAI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NEMHKFFNDJO>* IIBOOOLIEGD()
		{
			return ((::System::Collections::Generic::List_1<::NEMHKFFNDJO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJELKLNHMF_IIBOOOLIEGD_OFFSET))(this);
		}

		::System::Void DBJOBNOHHKE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NCJELKLNHMF_DBJOBNOHHKE_OFFSET))(this, a1, a2);
		}

	};
