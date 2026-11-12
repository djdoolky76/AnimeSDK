#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;

#define NKEPCHLECBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB2F1C0)
#define NKEPCHLECBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2F960)
#define NKEPCHLECBH_MNKFBMGKGII_OFFSET UNITYSDK_OFFSET(0x1DB2F760)
#define NKEPCHLECBH_PCDILBLPJPJ_OFFSET UNITYSDK_OFFSET(0x1DB2F390)

inline static constexpr unsigned int NKEPCHLECBH_TypeDefinitionIndex = 44522;

	class NKEPCHLECBH : public ::NOOHPODHIAA
	{
	public:
		::System::Single NMPMMIAKFMO; // 0x338
		::System::Boolean NIEBBABBPNG; // 0x33C
		::System::Boolean AMEPOEMDAPG; // 0x33D
		::System::Boolean DBAJLFNMHPI; // 0x33E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 EIAEMLJAPED; // 0x340
		::UnityEngine::Vector3 MGAHJFAHPAB; // 0x34C
		::System::UInt32 CCBIKJPMKBL; // 0x358
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
