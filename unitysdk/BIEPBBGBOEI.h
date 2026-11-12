#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BIEPBBGBOEI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE38060)
#define BIEPBBGBOEI_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBE37FC0)

inline static constexpr unsigned int BIEPBBGBOEI_TypeDefinitionIndex = 80414;

	class BIEPBBGBOEI : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelFireBulletNode* EABKOHGCHFP; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* LFAACOEFGPI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEPBBGBOEI_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + BIEPBBGBOEI_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
