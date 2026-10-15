#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OOLMMFFFIPL_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1C54DA50)
#define OOLMMFFFIPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54DB90)
#define OOLMMFFFIPL_DGFAGAPFFPK_OFFSET UNITYSDK_OFFSET(0x1C54DBA0)
#define OOLMMFFFIPL_ELBIEIKKLBD_OFFSET UNITYSDK_OFFSET(0x1C54DD40)
#define OOLMMFFFIPL_OMKNCCKHIMB_OFFSET UNITYSDK_OFFSET(0x1C54DE90)

inline static constexpr unsigned int OOLMMFFFIPL_TypeDefinitionIndex = 41737;

	class OOLMMFFFIPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* JFIJOIJKBIH; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OOLMMFFFIPL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 ADAHCAJBNOB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLMMFFFIPL_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Int32 DGFAGAPFFPK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOLMMFFFIPL_DGFAGAPFFPK_OFFSET))(this, a1);
		}

		::System::Int32 ELBIEIKKLBD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOLMMFFFIPL_ELBIEIKKLBD_OFFSET))(this, a1);
		}

		::System::Int32 OMKNCCKHIMB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOLMMFFFIPL_OMKNCCKHIMB_OFFSET))(this, a1);
		}

	};
