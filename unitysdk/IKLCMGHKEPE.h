#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKLCMGHKEPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B575610)
#define IKLCMGHKEPE_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x1B575690)
#define IKLCMGHKEPE_MHMPOJFDJMP_OFFSET UNITYSDK_OFFSET(0x1B5757E0)
#define IKLCMGHKEPE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B575760)

inline static constexpr unsigned int IKLCMGHKEPE_TypeDefinitionIndex = 66648;

	class IKLCMGHKEPE : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FPINFNEFENK; // 0x28
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IKLCMGHKEPE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IKLCMGHKEPE_UPDATE_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IKLCMGHKEPE_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Boolean MHMPOJFDJMP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLCMGHKEPE_MHMPOJFDJMP_OFFSET))(this, a1);
		}

	};
