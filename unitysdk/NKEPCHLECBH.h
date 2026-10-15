#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;

#define NKEPCHLECBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C96D3D0)
#define NKEPCHLECBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96DB90)
#define NKEPCHLECBH_MNKFBMGKGII_OFFSET UNITYSDK_OFFSET(0x1C96D990)
#define NKEPCHLECBH_PCDILBLPJPJ_OFFSET UNITYSDK_OFFSET(0x1C96D5C0)

	class NKEPCHLECBH : public ::NOOHPODHIAA
	{
	public:
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x338
		::System::Boolean NIEBBABBPNG; // 0x344
		::System::Boolean DBAJLFNMHPI; // 0x345
		::System::Boolean AMEPOEMDAPG; // 0x346
		::System::Byte _padding0[0x1];
		::System::UInt32 CCBIKJPMKBL; // 0x348
		::UnityEngine::Vector3 EIAEMLJAPED; // 0x34C
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
