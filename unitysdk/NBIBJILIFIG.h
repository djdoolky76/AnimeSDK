#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICKLANINJDB;
class MCKLINCMDKK;
class NBIBJILIFIG_DNOOPHCHPIH;
class NBIBJILIFIG_LJEGDMAPEPF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBIBJILIFIG_AANJLKKEGEC_2_OFFSET UNITYSDK_OFFSET(0x1C7859B0)
#define NBIBJILIFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C785880)
#define NBIBJILIFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C785920)
#define NBIBJILIFIG_IKAHNBNDHDL_OFFSET UNITYSDK_OFFSET(0x1C785B30)

inline static constexpr unsigned int NBIBJILIFIG_TypeDefinitionIndex = 36954;

	class NBIBJILIFIG : public ::System::Object
	{
	public:
		::NBIBJILIFIG_LJEGDMAPEPF* ECGHKJIBNME; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* OGOIPAEFPLO; // 0x18
		::System::Void _ctor(::NBIBJILIFIG_LJEGDMAPEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBJILIFIG_LJEGDMAPEPF*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBJILIFIG_DISPOSE_OFFSET))(this);
		}

		::System::Void AANJLKKEGEC_2(::System::UInt32 a1, ::System::UInt32 a2, ::NBIBJILIFIG_DNOOPHCHPIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NBIBJILIFIG_DNOOPHCHPIH*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_AANJLKKEGEC_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IKAHNBNDHDL(::System::UInt32 a1, ::MCKLINCMDKK* a2, ::ICKLANINJDB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MCKLINCMDKK*, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + NBIBJILIFIG_IKAHNBNDHDL_OFFSET))(this, a1, a2, a3);
		}

	};
