#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBKHJOFOACA;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace UnityEngine { class Transform; }

#define ELECJOJHOAJ_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x16466FF0)
#define ELECJOJHOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164667E0)
#define ELECJOJHOAJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x164669C0)
#define ELECJOJHOAJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16466BC0)

inline static constexpr unsigned int ELECJOJHOAJ_TypeDefinitionIndex = 80400;

	class ELECJOJHOAJ : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* COKDGBEABHP; // 0x10
		::UnityEngine::Transform* HKJLKMCDMGB; // 0x18
		::UnityEngine::Transform* IBLBKLNHKLL; // 0x20
		::System::Boolean HCOFMFKFMDK; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single LLNIGIGFCEA; // 0x2C
		::System::Single FLHOEGBFPJB; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::DuelChimeraProxy* a3, ::MBKHJOFOACA* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::DuelChimeraProxy*, ::MBKHJOFOACA*))((::PBYTE)hIl2Cpp + ELECJOJHOAJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECJOJHOAJ_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELECJOJHOAJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECJOJHOAJ_BJLJAHMLKIO_OFFSET))(this);
		}

	};
