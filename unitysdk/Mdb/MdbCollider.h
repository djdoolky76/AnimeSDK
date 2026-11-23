#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MDB_MDBCOLLIDER_BD7A98377803204B_OFFSET UNITYSDK_OFFSET(0x29EAE70)
#define MDB_MDBCOLLIDER_F45B260F636E203D_OFFSET UNITYSDK_OFFSET(0x29EAE40)
#define MDB_MDBCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x29EAEA0)

namespace Mdb
{
	inline static constexpr unsigned int MdbCollider_TypeDefinitionIndex = 15774;

	class MdbCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 norm; // 0x20
		::System::Boolean isGlobal; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* boneName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::String* BD7A98377803204B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER_BD7A98377803204B_OFFSET))(this);
		}

		::System::Void F45B260F636E203D(::Mdb::MdbCollider* B07BAD1D351C9637)
		{
			return ((::System::Void(*)(::PVOID, ::Mdb::MdbCollider*))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER_F45B260F636E203D_OFFSET))(this, B07BAD1D351C9637);
		}
	};
}
