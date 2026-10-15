#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define KIDPCOMKMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C900EB0)
#define KIDPCOMKMKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C900D10)
#define KIDPCOMKMKJ_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1C900DF0)
#define KIDPCOMKMKJ_FNLDKPJHDOO_OFFSET UNITYSDK_OFFSET(0x1C900E60)
#define KIDPCOMKMKJ_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1C900E00)
#define KIDPCOMKMKJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C900D50)
#define KIDPCOMKMKJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C900D90)
#define KIDPCOMKMKJ_PIIBNJGPLLO_OFFSET UNITYSDK_OFFSET(0x1C900E10)

inline static constexpr unsigned int KIDPCOMKMKJ_TypeDefinitionIndex = 42467;

	class KIDPCOMKMKJ : public ::System::Object
	{
	public:
		::System::Boolean PIPLLENMLIM; // 0x10
		::System::Boolean NHHALCBIMOF; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_GCCAABJLGIG_OFFSET))(this);
		}

		::FDPALAEIHPB* PIIBNJGPLLO()
		{
			return ((::FDPALAEIHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_PIIBNJGPLLO_OFFSET))(this);
		}

		::PEMFMPIPNJN* FNLDKPJHDOO()
		{
			return ((::PEMFMPIPNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDPCOMKMKJ_FNLDKPJHDOO_OFFSET))(this);
		}

	};
