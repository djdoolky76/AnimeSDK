#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E07E96E2067AEF3C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FE327128BC2DEC1D_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x24B5880)
#define FE327128BC2DEC1D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24B58A0)
#define FE327128BC2DEC1D_FD66684F5E0EB503_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FE327128BC2DEC1D_FDBFED13C2C27F3D_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FE327128BC2DEC1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE327128BC2DEC1D_TypeDefinitionIndex = 4710;

class FE327128BC2DEC1D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E07E96E2067AEF3C*>* F1A903AC58ED4452; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::E07E96E2067AEF3C* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E07E96E2067AEF3C*))((::PBYTE)hIl2Cpp + FE327128BC2DEC1D_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void FDBFED13C2C27F3D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E07E96E2067AEF3C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E07E96E2067AEF3C*>*))((::PBYTE)hIl2Cpp + FE327128BC2DEC1D_FDBFED13C2C27F3D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E07E96E2067AEF3C*>* FD66684F5E0EB503()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E07E96E2067AEF3C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FE327128BC2DEC1D_FD66684F5E0EB503_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FE327128BC2DEC1D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FE327128BC2DEC1D*&))((::PBYTE)hIl2Cpp + FE327128BC2DEC1D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE327128BC2DEC1D__CTOR_OFFSET))(this);
	}
};
