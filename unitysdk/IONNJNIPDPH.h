#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJFOOBLIKNH;
class IONNJNIPDPH;
class NGFHCJIAOLH;

#define IONNJNIPDPH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x165068D0)
#define IONNJNIPDPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16506950)
#define IONNJNIPDPH_HJNIIKKAEKO_OFFSET UNITYSDK_OFFSET(0x16506D80)
#define IONNJNIPDPH_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0x165069C0)
#define IONNJNIPDPH_IHIEDGHFPDI_OFFSET UNITYSDK_OFFSET(0x16506BF0)
#define IONNJNIPDPH_MEBMMDCKNHE_OFFSET UNITYSDK_OFFSET(0x16506B10)
#define IONNJNIPDPH_MJPFIAIGHOH_OFFSET UNITYSDK_OFFSET(0x16506D40)
#define IONNJNIPDPH_NCPGAGEHCOL_OFFSET UNITYSDK_OFFSET(0x16506960)

inline static constexpr unsigned int IONNJNIPDPH_TypeDefinitionIndex = 77745;

	class IONNJNIPDPH : public ::System::Object
	{
	public:
		::EJFOOBLIKNH* FDDFBEJCGJJ; // 0x10
		::NGFHCJIAOLH* ECHEFNFKMLE; // 0x18
		::System::Boolean IEHCFOLEGJP; // 0x20
		::System::Boolean CBEFGLIPEAI; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_CTOR_OFFSET))(this);
		}

		static ::IONNJNIPDPH* BPLPBPMEODA(::NGFHCJIAOLH* a1, ::EJFOOBLIKNH* a2)
		{
			return ((::IONNJNIPDPH*(*)(::NGFHCJIAOLH*, ::EJFOOBLIKNH*))((::PBYTE)hIl2Cpp + IONNJNIPDPH_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean NCPGAGEHCOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_NCPGAGEHCOL_OFFSET))(this);
		}

		::System::Boolean HOEKDHBPGAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Boolean MEBMMDCKNHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_MEBMMDCKNHE_OFFSET))(this);
		}

		::System::Boolean IHIEDGHFPDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_IHIEDGHFPDI_OFFSET))(this);
		}

		::System::Void MJPFIAIGHOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONNJNIPDPH_MJPFIAIGHOH_OFFSET))(this);
		}

		::System::Boolean HJNIIKKAEKO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IONNJNIPDPH_HJNIIKKAEKO_OFFSET))(this, a1, a2);
		}

	};
