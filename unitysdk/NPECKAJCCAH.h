#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class NPECKAJCCAH;
class OOBCBPNPOLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPECKAJCCAH_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x19CF6E90)
#define NPECKAJCCAH_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x19CF66E0)
#define NPECKAJCCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7130)
#define NPECKAJCCAH_DENOJDPJKJD_OFFSET UNITYSDK_OFFSET(0x19CF6B70)
#define NPECKAJCCAH_DPDBNHLHEDH_OFFSET UNITYSDK_OFFSET(0x19CF6E30)
#define NPECKAJCCAH_GCFPICNDPJK_OFFSET UNITYSDK_OFFSET(0x19CF6790)
#define NPECKAJCCAH_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x19CF6820)
#define NPECKAJCCAH_MJEGIKKOGAF_OFFSET UNITYSDK_OFFSET(0x19CF68C0)
#define NPECKAJCCAH_PBCGCKBCGFJ_OFFSET UNITYSDK_OFFSET(0x19CF6DA0)

inline static constexpr unsigned int NPECKAJCCAH_TypeDefinitionIndex = 75488;

	class NPECKAJCCAH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OOBCBPNPOLG*>* EBEKFJIIIFJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_CTOR_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void MJEGIKKOGAF(::NPECKAJCCAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPECKAJCCAH*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_MJEGIKKOGAF_OFFSET))(this, a1);
		}

		::System::Void DENOJDPJKJD(::OOBCBPNPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBCBPNPOLG*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_DENOJDPJKJD_OFFSET))(this, a1);
		}

		::System::Void GCFPICNDPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_GCFPICNDPJK_OFFSET))(this);
		}

		::System::Boolean PBCGCKBCGFJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_PBCGCKBCGFJ_OFFSET))(this, a1);
		}

		::System::Boolean DPDBNHLHEDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPECKAJCCAH_DPDBNHLHEDH_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::System::String* a2, ::DMGLFMNEJGL* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + NPECKAJCCAH_BEJAJNEFHIB_OFFSET))(this, a1, a2, a3);
		}

	};
