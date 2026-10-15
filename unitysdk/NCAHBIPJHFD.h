#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKDPMLNAPL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCAHBIPJHFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF7200)
#define NCAHBIPJHFD_DEBAJKGLOCC_OFFSET UNITYSDK_OFFSET(0xBAF6C90)
#define NCAHBIPJHFD_FCDNGFNBIOH_OFFSET UNITYSDK_OFFSET(0xBAF6FC0)
#define NCAHBIPJHFD_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xBAF71B0)
#define NCAHBIPJHFD_JDLDGFAPNHJ_OFFSET UNITYSDK_OFFSET(0xBAF6E20)
#define NCAHBIPJHFD_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xBAF6B30)

	class NCAHBIPJHFD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AJKDPMLNAPL*>* PIGAMPLHOLB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_CTOR_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::AJKDPMLNAPL* DEBAJKGLOCC(::System::String* a1)
		{
			return ((::AJKDPMLNAPL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_DEBAJKGLOCC_OFFSET))(this, a1);
		}

		::System::Void JDLDGFAPNHJ(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_JDLDGFAPNHJ_OFFSET))(this, a1, a2);
		}

		::System::Void FCDNGFNBIOH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_FCDNGFNBIOH_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAHBIPJHFD_HIDEJDELEEB_OFFSET))(this);
		}

	};
