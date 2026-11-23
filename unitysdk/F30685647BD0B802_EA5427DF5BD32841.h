#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B721D738BF1DCCD4.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F30685647BD0B802_EA5427DF5BD32841_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_EA5427DF5BD32841__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6DB0)

inline static constexpr unsigned int F30685647BD0B802_EA5427DF5BD32841_TypeDefinitionIndex = 11835;

class F30685647BD0B802_EA5427DF5BD32841 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_EA5427DF5BD32841__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::BED79290917896D4::B721D738BF1DCCD4 E82293C0814051A5, ::System::Int32 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::BED79290917896D4::B721D738BF1DCCD4, ::System::Int32))((::PBYTE)hIl2Cpp + F30685647BD0B802_EA5427DF5BD32841_INVOKE_OFFSET))(this, E82293C0814051A5, B714679C324FF96E);
	}
};
