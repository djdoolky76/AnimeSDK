#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FKNIEPCILLG_AOCOIDHKDKI_OFFSET UNITYSDK_OFFSET(0x1429D7D0)
#define FKNIEPCILLG_FMIKGCEAAPC_OFFSET UNITYSDK_OFFSET(0x1429D380)
#define FKNIEPCILLG_FPGJCKOMGJJ_OFFSET UNITYSDK_OFFSET(0x1429D140)
#define FKNIEPCILLG_HLANOONJMKO_OFFSET UNITYSDK_OFFSET(0x1429D370)
#define FKNIEPCILLG_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1429D1E0)
#define FKNIEPCILLG_KKEEABBDNLN_OFFSET UNITYSDK_OFFSET(0x1429D5F0)
#define FKNIEPCILLG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1429D000)
#define FKNIEPCILLG_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1429D410)
#define FKNIEPCILLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1429CF30)
#define FKNIEPCILLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CF20)

inline static constexpr unsigned int FKNIEPCILLG_TypeDefinitionIndex = 59448;

class FKNIEPCILLG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_EBDMKFGEGEL()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FKNIEPCILLG_TypeDefinitionIndex)->GetStaticField(0x3ACE0);
	}
	static ::System::Collections::Generic::Queue_1<::FKNIEPCILLG*>** StaticGet_IDALCPMPBBG()
	{
		return (::System::Collections::Generic::Queue_1<::FKNIEPCILLG*>**)Il2CppClass::FromTypeDefinitionIndex(FKNIEPCILLG_TypeDefinitionIndex)->GetStaticField(0x3ACE8);
	}
	::Il2CppArray<::System::Byte>* JFANAMNJIDK; // 0x10
	::System::Boolean EFFKAHPHMMK; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 CKPGOKHECCH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNIEPCILLG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNIEPCILLG__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNIEPCILLG_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void JJEJHGOJOII(::FKNIEPCILLG* EAIMGHKJLNF)
	{
		return ((::System::Void(*)(::FKNIEPCILLG*))((::PBYTE)hIl2Cpp + FKNIEPCILLG_JJEJHGOJOII_OFFSET))(EAIMGHKJLNF);
	}

	::System::Void FPGJCKOMGJJ(::Il2CppArray<::System::Byte>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKNIEPCILLG_FPGJCKOMGJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Byte>* HLANOONJMKO()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNIEPCILLG_HLANOONJMKO_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* FMIKGCEAAPC()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNIEPCILLG_FMIKGCEAAPC_OFFSET))(this);
	}

	static ::FKNIEPCILLG* OMPFLKCBFHF()
	{
		return ((::FKNIEPCILLG*(*)())((::PBYTE)hIl2Cpp + FKNIEPCILLG_OMPFLKCBFHF_OFFSET))();
	}

	::System::Boolean KKEEABBDNLN(::System::Int32 BDEDDEGJFKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKNIEPCILLG_KKEEABBDNLN_OFFSET))(this, BDEDDEGJFKL);
	}

	static ::System::Void AOCOIDHKDKI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNIEPCILLG_AOCOIDHKDKI_OFFSET))();
	}
};
