#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BIEPBBGBOEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0EA0)
#define BIEPBBGBOEI_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB4A0E00)

inline static constexpr unsigned int BIEPBBGBOEI_TypeDefinitionIndex = 77678;

	class BIEPBBGBOEI : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelFireBulletNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LFAACOEFGPI; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEPBBGBOEI_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + BIEPBBGBOEI_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
