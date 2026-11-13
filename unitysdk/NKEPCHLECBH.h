#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;

#define NKEPCHLECBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E04D880)
#define NKEPCHLECBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04E020)
#define NKEPCHLECBH_MNKFBMGKGII_OFFSET UNITYSDK_OFFSET(0x1E04DE20)
#define NKEPCHLECBH_PCDILBLPJPJ_OFFSET UNITYSDK_OFFSET(0x1E04DA60)

inline static constexpr unsigned int NKEPCHLECBH_TypeDefinitionIndex = 44522;

	class NKEPCHLECBH : public ::NOOHPODHIAA
	{
	public:
		::System::UInt32 CCBIKJPMKBL; // 0x338
		::UnityEngine::Vector3 EIAEMLJAPED; // 0x33C
		::UnityEngine::Vector3 MGAHJFAHPAB; // 0x348
		::System::Boolean NIEBBABBPNG; // 0x354
		::System::Boolean AMEPOEMDAPG; // 0x355
		::System::Boolean DBAJLFNMHPI; // 0x356
		::System::Byte _padding0[0x1];
		::System::Single NMPMMIAKFMO; // 0x358
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x35C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEPCHLECBH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEPCHLECBH_CLEAR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 PCDILBLPJPJ(::HIOEAKHGILF* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::HIOEAKHGILF*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NKEPCHLECBH_PCDILBLPJPJ_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 MNKFBMGKGII(::HIOEAKHGILF* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::HIOEAKHGILF*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NKEPCHLECBH_MNKFBMGKGII_OFFSET))(a1, a2, a3);
		}

	};
