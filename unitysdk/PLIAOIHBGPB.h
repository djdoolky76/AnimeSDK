#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMIIBJINHNI;
class DOHFBIFFIBK;
class PBHJHNFMFDH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLIAOIHBGPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC307160)
#define PLIAOIHBGPB_LGCBBJJIEBB_OFFSET UNITYSDK_OFFSET(0xC307270)
#define PLIAOIHBGPB_NMGCJCOLCHK_OFFSET UNITYSDK_OFFSET(0xC3073B0)

inline static constexpr unsigned int PLIAOIHBGPB_TypeDefinitionIndex = 80145;

	class PLIAOIHBGPB : public ::System::Object
	{
	public:
		::DOHFBIFFIBK* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMIIBJINHNI*>* GBIKFCJGFEL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PBHJHNFMFDH*>* DAIDALOOHGB; // 0x20
		::System::Void _ctor(::DOHFBIFFIBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOHFBIFFIBK*))((::PBYTE)hIl2Cpp + PLIAOIHBGPB_CTOR_OFFSET))(this, a1);
		}

		::DMIIBJINHNI* LGCBBJJIEBB(::System::UInt32 a1)
		{
			return ((::DMIIBJINHNI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLIAOIHBGPB_LGCBBJJIEBB_OFFSET))(this, a1);
		}

		::PBHJHNFMFDH* NMGCJCOLCHK(::System::UInt32 a1)
		{
			return ((::PBHJHNFMFDH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLIAOIHBGPB_NMGCJCOLCHK_OFFSET))(this, a1);
		}

	};
