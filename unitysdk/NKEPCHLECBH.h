#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;

#define NKEPCHLECBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C93F170)
#define NKEPCHLECBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C93F8F0)
#define NKEPCHLECBH_MNKFBMGKGII_OFFSET UNITYSDK_OFFSET(0x1C93F6F0)
#define NKEPCHLECBH_PCDILBLPJPJ_OFFSET UNITYSDK_OFFSET(0x1C93F330)

inline static constexpr unsigned int NKEPCHLECBH_TypeDefinitionIndex = 43540;

	class NKEPCHLECBH : public ::NOOHPODHIAA
	{
	public:
		::UnityEngine::Vector3 EIAEMLJAPED; // 0x338
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x344
		::System::Boolean AMEPOEMDAPG; // 0x350
		::System::Boolean DBAJLFNMHPI; // 0x351
		::System::Boolean NIEBBABBPNG; // 0x352
		::System::Byte _padding0[0x1];
		::System::UInt32 CCBIKJPMKBL; // 0x354
		::UnityEngine::Vector3 MGAHJFAHPAB; // 0x358
		::System::Single NMPMMIAKFMO; // 0x364
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
