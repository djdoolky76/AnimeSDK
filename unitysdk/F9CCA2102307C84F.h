#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace AF5FBA80BA4AF1CC { class A8BB995C62BA330B; }
namespace System { class String; }

#define F9CCA2102307C84F__CTOR_OFFSET UNITYSDK_OFFSET(0x3EC2620)

inline static constexpr unsigned int F9CCA2102307C84F_TypeDefinitionIndex = 15112;

class F9CCA2102307C84F : public ::System::Object
{
public:
	::System::Boolean EBB70D2482F24C9E; // 0x10
	::System::Boolean E788B38F8357558B; // 0x11
	::System::Byte _padding0[0x6];
	::AF5FBA80BA4AF1CC::A8BB995C62BA330B* BF0E9628AA023423; // 0x18
	::System::String* E8049B04FCC0522B; // 0x20
	::System::Boolean A8705FE76F3BECCB; // 0x28

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::Boolean E1F3891A4CD1CE28, ::System::Boolean FFFE4ECA3F43D957, ::System::Boolean E8ACE397B32DE330, ::AF5FBA80BA4AF1CC::A8BB995C62BA330B* B5459FABA90E20BD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::AF5FBA80BA4AF1CC::A8BB995C62BA330B*))((::PBYTE)hIl2Cpp + F9CCA2102307C84F__CTOR_OFFSET))(this, F79B4D487F303AB2, E1F3891A4CD1CE28, FFFE4ECA3F43D957, E8ACE397B32DE330, B5459FABA90E20BD);
	}
};
