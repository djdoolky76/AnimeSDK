#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }

#define PKOFKNCPCHN_AHLFOFOBGAB_OFFSET UNITYSDK_OFFSET(0x1DD88FC0)
#define PKOFKNCPCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD82270)
#define PKOFKNCPCHN_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1DD88F80)
#define PKOFKNCPCHN_JPNPMLCLEHJ_1_OFFSET UNITYSDK_OFFSET(0x1DD893A0)
#define PKOFKNCPCHN_JPNPMLCLEHJ_OFFSET UNITYSDK_OFFSET(0x1DD892F0)
#define PKOFKNCPCHN_MCEBBODDIFH_OFFSET UNITYSDK_OFFSET(0x1DD89160)
#define PKOFKNCPCHN_PJIFLDABEAG_OFFSET UNITYSDK_OFFSET(0x1DD88F90)

inline static constexpr unsigned int PKOFKNCPCHN_TypeDefinitionIndex = 6268;

	class PKOFKNCPCHN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ADLFOIOPMPK; // 0x10
		::System::Object* KFPEMLILHCE; // 0x18
		::System::Int32 EDIEODKIHBH; // 0x20
		::System::Void _ctor(::Il2CppArray<::System::Single>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Object*))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 IKOCHGBIGPJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Single PJIFLDABEAG(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_PJIFLDABEAG_OFFSET))(this, a1);
		}

		::RPG::MVector2 AHLFOFOBGAB(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_AHLFOFOBGAB_OFFSET))(this, a1);
		}

		::RPG::MVector3 MCEBBODDIFH(::System::Int32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_MCEBBODDIFH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* JPNPMLCLEHJ(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_JPNPMLCLEHJ_OFFSET))(this, a1);
		}

		::System::Void JPNPMLCLEHJ_1(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + PKOFKNCPCHN_JPNPMLCLEHJ_1_OFFSET))(this, a1, a2);
		}

	};
