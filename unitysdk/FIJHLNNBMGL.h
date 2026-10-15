#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FIJHLNNBMGL;

#define FIJHLNNBMGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6EB0)
#define FIJHLNNBMGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF6C90)

inline static constexpr unsigned int FIJHLNNBMGL_TypeDefinitionIndex = 13905;

	class FIJHLNNBMGL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EDFKEENLOFF; // 0x10
		::System::UInt32 BGOLMOKHCGD; // 0x18
		::System::Boolean FPDNFOLDFOB; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 JAKLCIIEDON; // 0x20
		::System::UInt32 CPCMBMBFBAI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJHLNNBMGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FIJHLNNBMGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FIJHLNNBMGL*))((::PBYTE)hIl2Cpp + FIJHLNNBMGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
