#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBKCCDGFNHH;
class FGCOIBFFCHB;

#define MHNCLNGIFFD_IHIBPHBCOIF_OFFSET UNITYSDK_OFFSET(0x1A655710)
#define MHNCLNGIFFD_IOODDPOHLHE_OFFSET UNITYSDK_OFFSET(0x1A655840)
#define MHNCLNGIFFD_KDNDHKNBANK_OFFSET UNITYSDK_OFFSET(0x1A655880)
#define MHNCLNGIFFD_PEMKJCHLJKB_OFFSET UNITYSDK_OFFSET(0x1A6558C0)

inline static constexpr unsigned int MHNCLNGIFFD_TypeDefinitionIndex = 83183;

class MHNCLNGIFFD : public ::System::Object
{
public:
	// static const ::System::Int32 HEAANMDIINE = 0x0; // 0x0

	static ::System::Boolean IHIBPHBCOIF(::CBKCCDGFNHH* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::CBKCCDGFNHH*))((::PBYTE)hIl2Cpp + MHNCLNGIFFD_IHIBPHBCOIF_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Void IOODDPOHLHE(::FGCOIBFFCHB* BAOBIBPKOEK)
	{
		return ((::System::Void(*)(::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MHNCLNGIFFD_IOODDPOHLHE_OFFSET))(BAOBIBPKOEK);
	}

	static ::System::Void KDNDHKNBANK(::System::Int32 ACEENLFDLKM)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MHNCLNGIFFD_KDNDHKNBANK_OFFSET))(ACEENLFDLKM);
	}

	static ::System::Void PEMKJCHLJKB(::System::Int32 LCKCLJHKLND)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MHNCLNGIFFD_PEMKJCHLJKB_OFFSET))(LCKCLJHKLND);
	}
};
