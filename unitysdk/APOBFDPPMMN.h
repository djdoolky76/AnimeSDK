#pragma once
#include "unitysdk/unitysdk.h"

class IGDLBIOALAF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define APOBFDPPMMN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x169D92B0)
#define APOBFDPPMMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169D8F90)
#define APOBFDPPMMN_IKLPGKMOAMF_OFFSET UNITYSDK_OFFSET(0x169D95A0)
#define APOBFDPPMMN_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x169D9720)
#define APOBFDPPMMN_ONCREATE_OFFSET UNITYSDK_OFFSET(0x169D8F50)
#define APOBFDPPMMN_UPDATE_OFFSET UNITYSDK_OFFSET(0x169D8FD0)
#define APOBFDPPMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x169D9180)

inline static constexpr unsigned int APOBFDPPMMN_TypeDefinitionIndex = 84281;

class APOBFDPPMMN
{
public:
	::System::Collections::Generic::Stack_1<::IGDLBIOALAF*>* DDJGPIJOPKG; // 0x10
	::System::Collections::Generic::Stack_1<::IGDLBIOALAF*>* GKGNKJPLFMB; // 0x18
	::System::Collections::Generic::List_1<::IGDLBIOALAF*>* CKFBNPNEDNB; // 0x20
	::System::Boolean BDJJONMELCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOBFDPPMMN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOBFDPPMMN_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOBFDPPMMN_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APOBFDPPMMN_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::IGDLBIOALAF* BBPCBEEHALC(::System::String* HIAIKHDFCLN, ::System::Boolean GJGMBLEGGJH)
	{
		return ((::IGDLBIOALAF*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + APOBFDPPMMN_BBPCBEEHALC_OFFSET))(this, HIAIKHDFCLN, GJGMBLEGGJH);
	}

	::System::Void IKLPGKMOAMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOBFDPPMMN_IKLPGKMOAMF_OFFSET))(this);
	}

	::System::Void MBKDOMFJFIG(::IGDLBIOALAF* EPLLEHIMMNN)
	{
		return ((::System::Void(*)(::PVOID, ::IGDLBIOALAF*))((::PBYTE)hIl2Cpp + APOBFDPPMMN_MBKDOMFJFIG_OFFSET))(this, EPLLEHIMMNN);
	}
};
