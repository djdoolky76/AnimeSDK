#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriTimeline::Atom { class CriAtomClipBase; }

#define E391E06FBBBB5DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB66D0)

inline static constexpr unsigned int E391E06FBBBB5DF5_TypeDefinitionIndex = 19210;

struct alignas(8) E391E06FBBBB5DF5
{
	::CriWare::CriTimeline::Atom::CriAtomClipBase* AD43DEAB8304398A; // 0x10
	::System::Int64 FE5BFF07A35D3A24; // 0x18
	::System::Double AC5F8E3184A82BBF; // 0x20
	::System::Boolean AC9FD766496FDA83; // 0x28

	::System::Void _ctor(::CriWare::CriTimeline::Atom::CriAtomClipBase* AD43DEAB8304398A, ::System::Int64 FE5BFF07A35D3A24, ::System::Double AC5F8E3184A82BBF, ::System::Boolean AC9FD766496FDA83)
	{
		return ((::System::Void(*)(::PVOID, ::CriWare::CriTimeline::Atom::CriAtomClipBase*, ::System::Int64, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + E391E06FBBBB5DF5__CTOR_OFFSET))(this, AD43DEAB8304398A, FE5BFF07A35D3A24, AC5F8E3184A82BBF, AC9FD766496FDA83);
	}
};
