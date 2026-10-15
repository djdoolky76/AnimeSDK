#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBKHJOFOACA;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace UnityEngine { class Transform; }

#define ELECJOJHOAJ_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x15512EE0)
#define ELECJOJHOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155126D0)
#define ELECJOJHOAJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x155128B0)
#define ELECJOJHOAJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15512AB0)

inline static constexpr unsigned int ELECJOJHOAJ_TypeDefinitionIndex = 77664;

	class ELECJOJHOAJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* IBLBKLNHKLL; // 0x10
		::RPG::Client::Prop::DuelChimeraProxy* COKDGBEABHP; // 0x18
		::UnityEngine::Transform* HKJLKMCDMGB; // 0x20
		::System::Single FLHOEGBFPJB; // 0x28
		::System::Single LLNIGIGFCEA; // 0x2C
		::System::Boolean HCOFMFKFMDK; // 0x30
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
