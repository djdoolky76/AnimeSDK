#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKLHNHFCDBL_BPCAEANBJKA;
namespace System { class Object; }

#define GKLHNHFCDBL_HKKGOGHCNHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95A70)
#define GKLHNHFCDBL_HKKGOGHCNHP_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x15A95950)
#define GKLHNHFCDBL_HKKGOGHCNHP_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x15A959B0)

inline static constexpr unsigned int GKLHNHFCDBL_HKKGOGHCNHP_TypeDefinitionIndex = 67780;

	class GKLHNHFCDBL_HKKGOGHCNHP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* Others; // 0x10
		::GKLHNHFCDBL_BPCAEANBJKA* First; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_HKKGOGHCNHP_CTOR_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_HKKGOGHCNHP_HIDEJDELEEB_OFFSET))(this);
		}

		::GKLHNHFCDBL_BPCAEANBJKA* PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::GKLHNHFCDBL_BPCAEANBJKA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_HKKGOGHCNHP_PEFLJDOKOIL_OFFSET))(this, a1);
		}

	};
