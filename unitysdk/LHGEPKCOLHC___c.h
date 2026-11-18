#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LHGEPKCOLHC___C_CKGLHONKNNO_OFFSET UNITYSDK_OFFSET(0x12A47A90)
#define LHGEPKCOLHC___C_PECJEGGHLBA_OFFSET UNITYSDK_OFFSET(0x12A47A30)
#define LHGEPKCOLHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A479E0)
#define LHGEPKCOLHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A47A20)

inline static constexpr unsigned int LHGEPKCOLHC___c_TypeDefinitionIndex = 49770;

class LHGEPKCOLHC___c : public ::System::Object
{
public:
	static ::System::Func_2<::HNFADNMADCK, ::System::Object*>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::HNFADNMADCK, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LHGEPKCOLHC___c_TypeDefinitionIndex)->GetStaticField(0x44730);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LHGEPKCOLHC___c_TypeDefinitionIndex)->GetStaticField(0x44738);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LHGEPKCOLHC___c_TypeDefinitionIndex)->GetStaticField(0x44740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHGEPKCOLHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGEPKCOLHC___C__CTOR_OFFSET))(this);
	}

	::DEDDPKGLKHI_LODLFMBCLAH PECJEGGHLBA(::HNFADNMADCK IPMMCGDMODG)
	{
		return ((::DEDDPKGLKHI_LODLFMBCLAH(*)(::PVOID, ::HNFADNMADCK))((::PBYTE)hIl2Cpp + LHGEPKCOLHC___C_PECJEGGHLBA_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean CKGLHONKNNO(::System::UInt32 OFJCKDMPPFO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHGEPKCOLHC___C_CKGLHONKNNO_OFFSET))(this, OFJCKDMPPFO);
	}
};
