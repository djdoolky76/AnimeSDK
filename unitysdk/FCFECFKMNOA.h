#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1_1036FF0C6A510415; }

#define FCFECFKMNOA_CFHAAHMPHHF_OFFSET UNITYSDK_OFFSET(0x1E5E2C10)
#define FCFECFKMNOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5EB6A0)
#define FCFECFKMNOA_ELKIGOAIDLK_OFFSET UNITYSDK_OFFSET(0x1E5E2BB0)
#define FCFECFKMNOA_JEAIFDNPIAH_OFFSET UNITYSDK_OFFSET(0x1E5DF620)
#define FCFECFKMNOA_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1E5DFBF0)
#define FCFECFKMNOA_KLHPABAEFOD_OFFSET UNITYSDK_OFFSET(0x1E5DF5D0)
#define FCFECFKMNOA_KLPKAPADKOG_OFFSET UNITYSDK_OFFSET(0x1E5DF880)
#define FCFECFKMNOA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB6F0)
#define FCFECFKMNOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB620)

inline static constexpr unsigned int FCFECFKMNOA_TypeDefinitionIndex = 34070;

class FCFECFKMNOA : public ::System::Object
{
public:
	static ::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>** StaticGet_KGEHKNIHKCI()
	{
		return (::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FCFECFKMNOA_TypeDefinitionIndex)->GetStaticField(0x2A0A0);
	}
	::Il2CppArray<::System::Byte>* MDIBCBFNHCD; // 0x10
	::System::Action_1<::Il2CppArray<::System::Byte>*>* MMNCBENGKHL; // 0x18
	::System::Int32 IFHPNDPONAL; // 0x20
	::System::Boolean CMDPMENEKLI; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 JNMLHNNJOJP; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* GMHJGPODKLM, ::System::Action_1<::Il2CppArray<::System::Byte>*>* EBCPGEGEEEM)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Action_1<::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + FCFECFKMNOA__CTOR_OFFSET))(this, GMHJGPODKLM, EBCPGEGEEEM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFECFKMNOA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_DISPOSE_OFFSET))(this);
	}

	static ::FCFECFKMNOA* CFHAAHMPHHF(::System::Int32 BEPMDFENBMH, ::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>* AIBLPKLIGNK)
	{
		return ((::FCFECFKMNOA*(*)(::System::Int32, ::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>*))((::PBYTE)hIl2Cpp + FCFECFKMNOA_CFHAAHMPHHF_OFFSET))(BEPMDFENBMH, AIBLPKLIGNK);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean KLPKAPADKOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_KLPKAPADKOG_OFFSET))(this);
	}

	::System::Void KLHPABAEFOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_KLHPABAEFOD_OFFSET))(this);
	}

	static ::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>* ELKIGOAIDLK()
	{
		return ((::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + FCFECFKMNOA_ELKIGOAIDLK_OFFSET))();
	}

	::System::Void JEAIFDNPIAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_JEAIFDNPIAH_OFFSET))(this);
	}
};
